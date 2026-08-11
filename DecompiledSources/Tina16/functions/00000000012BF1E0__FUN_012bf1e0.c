/* Ghidra address: 012bf1e0 */
/* Ghidra symbol: FUN_012bf1e0 */


void FUN_012bf1e0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  undefined2 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined2 local_2f8 [6];
  char local_2ec;
  char local_2e4;
  char local_2ca;
  char local_2b8;
  undefined4 local_294;
  undefined1 local_290 [624];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  DAT_01f2ff00 = '\0';
  FUN_0040ce70(local_290,local_res10[0]);
  FUN_0040e6e0(local_290,4);
  FUN_012bf1c0(param_1);
  if (DAT_01f2ff00 == '\0') {
    bVar4 = 0x65;
    iVar5 = 1;
    local_294 = 0;
    bVar1 = false;
    while (!bVar1) {
      FUN_0040d350(local_290,&local_294);
      FUN_012bf1c0(param_1);
      uVar3 = FUN_012bf170(param_1,local_294,iVar5);
      local_2f8[(longlong)iVar5 + -1] = uVar3;
      bVar4 = bVar4 ^ (byte)uVar3;
      iVar5 = iVar5 + 1;
      if (0x32 < iVar5) {
        bVar1 = true;
      }
    }
    FUN_0040d350(local_290,&local_294);
    FUN_012bf1c0(param_1);
    bVar2 = FUN_012bf170(param_1,local_294,iVar5);
    FUN_0040d150(local_290);
    FUN_012bf1c0(param_1);
    if (bVar4 == bVar2) {
      DAT_01f2fefc = local_2e4 + -0x21;
      DAT_01f2fefd = local_2b8 + -0x6f;
      DAT_01f2fefe = local_2ec + '8';
      DAT_01f2feff = local_2ca + -3;
    }
  }
  else {
    DAT_01f2ff00 = '\0';
  }
  FUN_00414480(local_res10);
  return;
}

