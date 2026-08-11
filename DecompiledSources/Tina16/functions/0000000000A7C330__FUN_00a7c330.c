/* Ghidra address: 00a7c330 */
/* Ghidra symbol: FUN_00a7c330 */


undefined1 FUN_00a7c330(undefined8 param_1)

{
  int iVar1;
  undefined1 local_21;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_0043e1a0(local_20,param_1);
  FUN_00416cd0(&local_10,3,&DAT_00a7c464,local_20[0],&DAT_00a7c464);
  iVar1 = FUN_004170c0(local_10,L",htm,html,css,php,asp,shtml,",1);
  if (iVar1 < 1) {
    iVar1 = FUN_004170c0(local_10,L",xht,xhtml,",1);
    if (iVar1 < 1) {
      iVar1 = FUN_004170c0(local_10,L",gif,tiff,tif,jpg,jpeg,png,bmp,rle,dib,jpe,jfif,emf,wmf,",1);
      if (iVar1 < 1) {
        iVar1 = FUN_004170c0(local_10,L",txt,ini,sql,",1);
        if (iVar1 < 1) {
          local_21 = 4;
        }
        else {
          local_21 = 1;
        }
      }
      else {
        local_21 = 2;
      }
    }
    else {
      local_21 = 3;
    }
  }
  else {
    local_21 = 0;
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return local_21;
}

