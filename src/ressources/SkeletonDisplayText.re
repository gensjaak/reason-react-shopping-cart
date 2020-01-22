[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (~size: [@bs.string] [ | `small | `large]=?, ~children: React.element=?) =>
  React.element =
  "SkeletonDisplayText";