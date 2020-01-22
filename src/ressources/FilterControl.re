[@react.component] [@bs.scope "ResourceList"] [@bs.module "@shopify/polaris"]
external make:
  (
    ~onSearchChange: string => unit,
    ~searchValue: string,
    ~children: React.element=?
  ) =>
  React.element =
  "FilterControl";