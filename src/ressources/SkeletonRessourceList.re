[@react.component]
let make = (~length: int) => {
  <ResourceList
    items={Array.make(length, 0) |> Array.mapi((index, _) => index)}
    renderItem={item =>
      <ResourceItem id={item->string_of_int}>
        <SkeletonBodyText lines=1 />
      </ResourceItem>
    }
  />;
};