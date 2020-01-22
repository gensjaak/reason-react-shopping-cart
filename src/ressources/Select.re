[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~label: string,
    ~options: array({
                .
                "label": string,
                "value": 'a,
              }),
    ~value: 'a,
    ~onChange: 'a => unit
  ) =>
  React.element =
  "Select";