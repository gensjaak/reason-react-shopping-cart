[@bs.deriving abstract]
type item = {
  url: string,
  label: string,
  icon: string,
  exactMatch: bool,
};

[@react.component] [@bs.scope "Navigation"] [@bs.module "@shopify/polaris"]
external make: (~title: string=?, ~items: array(item)) => React.element =
  "Section";