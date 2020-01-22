[@react.component] [@bs.module "@shopify/polaris"]
external make:
  (
    ~headings: array(string),
    ~rows: array(array('a)),
    ~columnContentTypes: array([ | `text | `numeric | `large]),
    ~footerContent: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "DataTable";