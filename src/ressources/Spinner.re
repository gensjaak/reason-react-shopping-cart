[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~color: [@bs.string] [ | `white | `teal | `inkLightest]=?,
    ~size: [@bs.string] [ | `small | `large]=?,
    ~children: React.element
  ) =>
  React.element =
  "Spinner";