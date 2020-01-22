[@bs.deriving abstract]
type primaryAction = {
  content: string,
  onAction: unit => unit,
  loading: bool,
  [@bs.optional]
  disabled: bool,
};

[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~title: string,
    ~_open: bool,
    ~onClose: unit => unit,
    ~primaryAction: primaryAction=?,
    ~children: React.element
  ) =>
  React.element =
  "Modal";