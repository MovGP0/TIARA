/* Ghidra address: 006ef850 */
/* Ghidra symbol: FUN_006ef850 */


void FUN_006ef850(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_5c;
  
  iVar1 = FUN_006eeb80(*(undefined8 *)(param_1 + 0x10),param_2);
  if (iVar1 != param_3) {
    FUN_006eeba0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x510) == '\0') {
      local_80 = 2;
      local_5c = 0xffffffff;
      local_7c = FUN_006ef6e0(param_1);
      local_78 = param_2 + 1;
      uVar2 = FUN_006eeda0(param_1);
      thunk_FUN_041b2403(uVar2,0x104c,0,&local_80);
    }
  }
  return;
}

