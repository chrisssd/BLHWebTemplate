function ApplyBootstrapListGroups() {

    $(".list-group li").addClass('list-group-item');
    
    var items = $(".list-group li");
    for (var node =0; node < items.length;node++) {
        var classList = items[node].className.split(/\s+/);
        for (var i = 0; i < classList.length; i++) {
            if (classList[i] === 'selectedPage' || classList[i] === 'selectedPageParent') {
                items[node].className += " active";
                
            } else {
                items[node].className += " noShadow";
            }

           
        }
    }
    
}
function ApplyBootstrapPills() {

    $(".nav-pills ul").addClass('list-group');
     $(".nav-pills .list-group li").addClass('list-group-item');
    
    var items = $(".nav-pills li");
    for (var node =0; node < items.length;node++) {
        var classList = items[node].className.split(/\s+/);
        for (var i = 0; i < classList.length; i++) {
            if (classList[i] === 'selectedPage' || classList[i] === 'selectedPageParent') {
                items[node].className += " active";
                
            } else {
                items[node].className += " noShadow";
            }

           
        }
    }
    
}

function ApplyBootstrapMenu() {

  


    
}

function ApplyBootstrapSearch() {

    $(".search button").addClass('btn btn-default');
    
$   (".search input").addClass('form-control');
    
}