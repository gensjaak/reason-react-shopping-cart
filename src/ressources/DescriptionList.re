[@bs.deriving abstract]
type item = {
  term: string,
  description: string,
};

[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (~items: array(item), ~children: React.element=?) => React.element =
  "DescriptionList";