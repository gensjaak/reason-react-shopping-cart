type file = Js.Json.t;

[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~accept: string=?,
    ~_type: string=?,
    ~label: string,
    ~errorOverlayText: string=?,
    ~onDrop: (array(file), array(file), array(file)) => unit,
    ~children: React.element=?
  ) =>
  React.element =
  "DropZone";