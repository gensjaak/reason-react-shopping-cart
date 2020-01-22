[@bs.deriving {abstract: light}]
type primaryFooterAction = {
  content: string,
  [@bs.optional]
  url: string,
  [@bs.optional]
  onAction: unit => unit,
  loading: bool,
};

[@bs.deriving {abstract: light}]
type secondaryFooterAction = {
  content: string,
  [@bs.optional]
  url: string,
  [@bs.optional]
  onAction: unit => unit,
  [@bs.optional]
  loading: bool,
};

[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~title: string=?,
    ~sectioned: bool=?,
    ~primaryFooterAction: primaryFooterAction=?,
    ~secondaryFooterAction: secondaryFooterAction=?,
    ~children: React.element
  ) =>
  React.element =
  "Card";