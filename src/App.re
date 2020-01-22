open Belt;

let str = React.string;

type product = {
  id: int,
  name: string,
  description: string,
  price: float,
  tax: float,
};
type cartProduct = {
  productId: int,
  quantity: int,
};
type cart = {products: list(cartProduct)};
type state = {
  items: list(product),
  cart,
};

let renderItem = (item: product) => {
  let shortcutActions = [|
    ResourceItem.shortcutAction(
      ~content="Add to basket (+1)",
      ~onAction=() => Js.log("Add " ++ item.name),
      (),
    ),
  |];

  <ResourceItem
    id={string_of_int(item.id)} persistActions=true shortcutActions>
    <h3> <strong> item.name->str </strong> </h3>
    <div> item.description->str </div>
    <br />
    <p>
      "Unit price: "->str
      <strong>
        (" " ++ Js.Float.toString(item.price) ++ {js|€|js})->str
      </strong>
    </p>
  </ResourceItem>;
};

[@react.component]
let make = () => {
  let ({items, cart}, _dispatch) =
    React.useReducer(
      (state, _action) => state,
      {
        items: [
          {
            id: 0,
            name: "Product A",
            description: "Lorem ipsum dolor sit, amet consectetur",
            price: 12.0,
            tax: 20.0,
          },
          {
            id: 1,
            name: "Product B",
            description: "Lorem ipsum dolor sit, amet consectetur",
            price: 13.0,
            tax: 5.5,
          },
        ],
        cart: {
          products: [
            {productId: 0, quantity: 2},
            {productId: 1, quantity: 3},
          ],
        },
      },
    );

  <AppProvider>
    <Page title="React Shopping Cart">
      <Layout>
        <LayoutSection>
          <Card>
            <ResourceList
              resourceName={
                ResourceList.resourceName(
                  ~singular="Customer",
                  ~plural="Customers",
                )
              }
              items=items->List.toArray
              renderItem
            />
          </Card>
        </LayoutSection>
        <LayoutSection secondary=true>
          <Card
            title="Basket"
            primaryFooterAction={
              Card.primaryFooterAction(~content="Pay now", ~loading=false, ())
            }
            secondaryFooterAction={
              Card.secondaryFooterAction(~content="Cancel cart", ())
            }>
            <CardSection title="Totals">
              <PolarisList _type=`number>
                {
                  cart.products
                  ->List.map(item =>
                      <ListItem key={string_of_int(item.productId)}>
                        <span>
                          ("ID Produit = " ++ string_of_int(item.productId))
                          ->str
                        </span>
                        <span>
                          (", Qte = " ++ string_of_int(item.quantity))->str
                        </span>
                      </ListItem>
                    )
                  ->List.toArray
                  |> React.array
                }
              </PolarisList>
            </CardSection>
          </Card>
        </LayoutSection>
      </Layout>
    </Page>
  </AppProvider>;
};