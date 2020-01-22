[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~size: [@bs.string] [ | `small | `large],
    ~alt: string,
    ~children: React.element=?
  ) =>
  React.element =
  "Thumbnail";