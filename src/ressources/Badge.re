[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~progress: [@bs.string] [ | `incomplete | `partiallyComplete | `complete]=?,
    ~status: [@bs.string] [ | `success | `info | `attention | `warning]=?,
    ~children: React.element
  ) =>
  React.element =
  "Badge";