/* Ghidra address: 0045c9d0 */
/* Ghidra symbol: FUN_0045c9d0 */


bool FUN_0045c9d0(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_124 [282];
  undefined1 local_a;
  
  FUN_0040d200(local_124,0x11c,0);
  local_a = 1;
  uVar1 = thunk_FUN_04053c4c(0,0x80,1);
  iVar2 = thunk_FUN_0416b0df(local_124,0x80,uVar1);
  return iVar2 == 0;
}

