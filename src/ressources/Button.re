[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~onClick: unit => unit,
    ~primary: bool=?,
    ~loading: bool=?,
    ~size: [@bs.string] [ | `slim | `medium | `large]=?,
    ~children: React.element
  ) =>
  React.element =
  "Button";