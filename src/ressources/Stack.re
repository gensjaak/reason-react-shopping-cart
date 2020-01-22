[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~alignment: [@bs.string] [
                  | `leading
                  | `trailing
                  | `center
                  | `fill
                  | `baseline
                ]
                  =?,
    ~vertical: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "Stack";