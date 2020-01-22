[@bs.deriving abstract]
type breadcrumb = {
  content: string,
  url: string,
};

[@bs.deriving abstract]
type primaryAction = {
  content: string,
  onAction: unit => unit,
};

[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~title: string,
    ~breadcrumbs: array(breadcrumb)=?,
    ~primaryAction: Js.Nullable.t(primaryAction)=?,
    ~separator: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "Page";