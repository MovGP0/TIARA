/* Ghidra address: 00f13f40 */
/* Ghidra symbol: FUN_00f13f40 */


void FUN_00f13f40(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  (**(code **)(*param_1 + 0x68))(param_1);
  lVar2 = FUN_0040c770((double)(*(int *)(param_1[0xf] + 0x1c) - *(int *)(param_1[0xf] + 0x14)) /
                       50.0);
  if (lVar2 < 10) {
    lVar2 = 10;
  }
  FUN_01d2c460(param_1,(int)param_1[0x19],*(undefined4 *)((longlong)param_1 + 0xcc));
  FUN_01d2c460(param_1,(int)param_1[0x19] + (int)param_1[0x1a],
               *(int *)((longlong)param_1 + 0xcc) + *(int *)((longlong)param_1 + 0xd4));
  local_30 = FUN_00498310((int)param_1[0x19],*(undefined4 *)((longlong)param_1 + 0xcc));
  local_38 = FUN_00498310((int)param_1[0x19] + (int)param_1[0x1a],
                          *(int *)((longlong)param_1 + 0xcc) + *(int *)((longlong)param_1 + 0xd4));
  FUN_01a8df60(&local_30,&local_38,0x4032000000000000,(double)(int)lVar2,&local_20,&local_28);
  cVar1 = *(char *)((longlong)param_1 + 0x9d);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      FUN_01d2c460(param_1,local_20,local_1c);
      FUN_01d2c460(param_1,local_28,local_24);
      FUN_01d2c460(param_1,(int)param_1[0x19] + (int)param_1[0x1a],
                   *(int *)((longlong)param_1 + 0xcc) + *(int *)((longlong)param_1 + 0xd4));
      return;
    }
    if (1 < (byte)(cVar1 - 2U)) {
      return;
    }
  }
  FUN_01d2c460(param_1,local_20,local_1c);
  FUN_01d2c460(param_1,(int)param_1[0x19] + (int)param_1[0x1a],
               *(int *)((longlong)param_1 + 0xcc) + *(int *)((longlong)param_1 + 0xd4));
  FUN_01d2c460(param_1,local_28,local_24);
  return;
}

