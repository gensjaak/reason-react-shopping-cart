[@bs.deriving abstract]
type resourceName = {
  singular: string,
  plural: string,
};

[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~resourceName: resourceName=?,
    ~items: array('item),
    ~renderItem: 'item => React.element,
    ~showHeader: bool=?,
    ~filterControl: Js.Nullable.t(React.element)=?,
    ~alternateTool: Js.Nullable.t(React.element)=?,
    ~loading: bool=?
  ) =>
  React.element =
  "ResourceList";