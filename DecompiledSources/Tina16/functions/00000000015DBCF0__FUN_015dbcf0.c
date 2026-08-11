/* Ghidra address: 015dbcf0 */
/* Ghidra symbol: FUN_015dbcf0 */


void FUN_015dbcf0(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414b50(local_20,*param_2);
  FUN_015d9080(param_1,param_2,0,*(longlong *)(param_1 + 0x1b0) == 0);
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    if (*(char *)(param_1 + 0x103) == '\x01') {
      FUN_0041ddd0(local_30,PTR_PTR_020048d8);
      iVar3 = FUN_0072d440(local_30[0],3,0xc,0);
      *param_3 = iVar3 != 1;
      FUN_015d9080(param_1,local_20,0,1);
      FUN_00414ad0(param_2,local_20[0]);
    }
    else {
      cVar1 = FUN_015bf1b0(*param_2);
      if ((cVar1 == '\0') && (*(short *)(param_1 + 0xa0) != -0x100)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *param_3 = uVar2;
    }
  }
  else {
    (**(code **)(param_1 + 0x1b0))(*(undefined8 *)(param_1 + 0x1b8),param_1,param_2,param_3);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

