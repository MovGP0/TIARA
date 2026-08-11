/* Ghidra address: 00b2f950 */
/* Ghidra symbol: FUN_00b2f950 */


undefined8
FUN_00b2f950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 local_res20 [2];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_1c [3];
  
  local_28 = 0;
  if (param_5 == '\0') {
    uVar5 = 0x42;
  }
  else {
    uVar5 = 0x22;
  }
  local_res20[0] = param_4;
  FUN_00417360(param_2,0,4);
  puVar2 = (undefined1 *)FUN_00414df0(param_2);
  *puVar2 = uVar5;
  lVar3 = FUN_00414df0(param_2);
  FUN_00409a70(local_res20,lVar3 + 1,1);
  local_1c[0] = 0xffffffff;
  FUN_0061d840(&local_28,param_3);
  iVar1 = FUN_00b1b100(*(undefined8 *)(param_1 + 0x30),&local_28);
  if (iVar1 < 0) {
    local_30 = 0xb;
    local_38 = param_3;
    uVar4 = FUN_00b147c0(&PTR_FUN_00b141e0,1,9,&local_38,0);
    FUN_004134c0(uVar4);
  }
  else {
    local_1c[0] = *(undefined4 *)(PTR_PTR_02005938 + (longlong)iVar1 * 0x10 + 8);
  }
  lVar3 = FUN_00414df0(param_2);
  FUN_00409a70(local_1c,lVar3 + 2,2);
  FUN_004144d0(&local_28);
  return param_2;
}

