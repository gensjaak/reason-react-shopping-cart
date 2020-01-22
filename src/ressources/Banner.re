[@bs.deriving {abstract: light}]
type action = {
  content: string,
  onAction: unit => unit,
};

[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~title: string,
    ~action: action=?,
    ~status: [@bs.string] [ | `success | `info | `warning | `critical]=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Banner";