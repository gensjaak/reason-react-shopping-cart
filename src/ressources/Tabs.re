[@bs.deriving abstract]
type tab = {
  id: string,
  content: string,
  panelID: string,
};

[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~selected: int,
    ~onSelect: int => unit,
    ~tabs: array(tab),
    ~children: React.element
  ) =>
  React.element =
  "Tabs";