[@react.component] [@bs.scope "Card"] [@bs.module "@shopify/polaris"]
external make:
  (
    ~title: string,
    ~subdued: bool=?,
    ~sectionned: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "Section";