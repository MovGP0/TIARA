/* Ghidra address: 01601c40 */
/* Ghidra symbol: FUN_01601c40 */


undefined8
FUN_01601c40(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4,undefined1 *param_5
            )

{
  char cVar1;
  int iVar2;
  undefined8 local_res20;
  undefined8 local_328;
  undefined8 local_320;
  undefined1 local_318 [768];
  
  local_328 = 0;
  local_320 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  cVar1 = FUN_01d3e3e0(param_2,1);
  FUN_00414ad0(param_1,local_res20);
  *param_5 = 0;
  if (cVar1 != '\0') {
    FUN_01d3da40(local_318,param_2);
    iVar2 = FUN_01d3e250(local_318,1);
    if (iVar2 < param_3 + 1) {
      (**(code **)(*param_2 + 0x288))(param_2,&local_320);
      FUN_00416ad0(&local_320,L": CheckWithInputFault");
      FUN_015fcf20(local_320,0,0,0);
    }
    iVar2 = FUN_01d3e360(param_2,param_3 + 1,1);
    if (iVar2 != 4) {
      *param_5 = 1;
      FUN_015f1c60(&local_328,iVar2);
      FUN_00416cd0(param_1,3,&DAT_01601e04,local_328,&DAT_01601e04);
    }
  }
  FUN_00414560(&local_328,2);
  FUN_00414480(&local_res20);
  return param_1;
}

