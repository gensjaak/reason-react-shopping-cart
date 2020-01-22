[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~name: string=?,
    ~customer: bool=?,
    ~source: string=?,
    ~size: [@bs.string] [ | `small | `medium | `large]=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Avatar";