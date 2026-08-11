/* Ghidra address: 00cb87b0 */
/* Ghidra symbol: FUN_00cb87b0 */


undefined4
FUN_00cb87b0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
            undefined2 *param_5,undefined1 *param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  if ((byte)(*(char *)(param_1 + 0x119) - 1U) < 2) {
    FUN_0041ddd0(local_20,PTR_PTR_020057b8);
    uVar3 = FUN_0086dfd0(&PTR_FUN_00cb48e0,1,local_20[0]);
    FUN_004134c0(uVar3);
  }
  lVar4 = 0;
  if (*param_3 != 0) {
    lVar4 = *(longlong *)(*param_3 + -8);
  }
  FUN_00419260(&local_10,&DAT_0086e978,1,lVar4 + 200);
  cVar1 = FUN_00c8fa10(param_2,param_7);
  if (cVar1 == '\0') {
    local_2c = 0;
    FUN_00414480(param_4);
    *param_5 = 0;
    *param_6 = 0;
  }
  else {
    iVar2 = FUN_00c8f1f0(param_2,&local_10,param_4,param_5,param_6);
    FUN_00419260(&local_10,&DAT_0086e978,1,(longlong)iVar2);
    FUN_00cb8240(param_1,&local_28,local_10,param_4,param_5,param_6);
    uVar5 = (undefined4)((ulonglong)param_5 >> 0x20);
    FUN_004194b0(&local_10,local_28,&DAT_0086e978);
    local_2c = 0;
    if (local_10 != 0) {
      local_2c = (undefined4)*(undefined8 *)(local_10 + -8);
    }
    FUN_00874e50(local_10,0,param_3,0,CONCAT44(uVar5,local_2c));
  }
  FUN_00419430(&local_28,&DAT_0086e978);
  FUN_00414480(local_20);
  FUN_00419430(&local_10,&DAT_0086e978);
  return local_2c;
}

