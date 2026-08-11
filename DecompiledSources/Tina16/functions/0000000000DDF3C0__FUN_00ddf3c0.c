/* Ghidra address: 00ddf3c0 */
/* Ghidra symbol: FUN_00ddf3c0 */


void FUN_00ddf3c0(longlong param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  undefined1 local_48 [64];
  
  FUN_00417580(local_48,&DAT_00470720);
  FUN_00ddd3d0(param_1);
  *param_3 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x30))
                    (*(longlong **)(param_1 + 0x4c8),param_2,PTR_DAT_02003140,0,2,&DAT_01ed7038,
                     param_3,local_48,0);
  if (iVar1 != 0) {
    FUN_00625ac0(iVar1,local_48);
  }
  FUN_00417740(local_48,&DAT_00470720);
  return;
}

