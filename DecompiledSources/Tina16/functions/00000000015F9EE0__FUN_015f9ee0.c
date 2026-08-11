/* Ghidra address: 015f9ee0 */
/* Ghidra symbol: FUN_015f9ee0 */


undefined8 FUN_015f9ee0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_820 [2];
  undefined1 local_810 [2048];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  
  local_820[0] = 0;
  cVar1 = _MakeElaboration(param_1,local_c,local_10,local_810,1);
  if (cVar1 == '\0') {
    FUN_00416830(local_820,local_810,0x400);
    FUN_015fcf20(local_820[0],0,0,0);
  }
  uVar2 = _EntityDecl_GetPorts(param_1,param_2,param_3,param_4);
  FUN_00414480(local_820);
  return uVar2;
}

