[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~variation: [@bs.string] [ | `positive | `negative | `strong | `subdued]=?,
    ~children: React.element
  ) =>
  React.element =
  "TextStyle";