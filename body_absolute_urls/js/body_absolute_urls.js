(function ($) {
    Drupal.behaviors.nonRefreshLinks = {
        attach: function (context) {
            $("a").click(function(e) {
                e.preventDefault(); //so the browser doesn't follow the link
                var anchor_href = this.href;
                $("#content").load(anchor_href + ' #content');
            });
        }
    }
})(jQuery);
