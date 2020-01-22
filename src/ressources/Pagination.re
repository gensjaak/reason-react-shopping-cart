[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~onPrevious: unit => unit=?,
    ~onNext: unit => unit=?,
    ~hasPrevious: bool=?,
    ~hasNext: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "Pagination";