[@bs.deriving abstract]
type shortcutAction = {
  content: string,
  [@bs.optional]
  url: string,
  [@bs.optional]
  onAction: unit => unit,
};

[@react.component] [@bs.scope "ResourceList"] [@bs.module "@shopify/polaris"]
external make:
  (
    ~id: string,
    ~url: string=?,
    ~media: React.element=?,
    ~shortcutActions: array(shortcutAction)=?,
    ~persistActions: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Item";