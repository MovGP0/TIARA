/* Ghidra address: 00c8f700 */
/* Ghidra symbol: FUN_00c8f700 */


void FUN_00c8f700(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00875200(param_2,1,0);
  (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0xd0))
            (*(longlong **)PTR_DAT_020050b0,*(undefined8 *)(param_1 + 0x20),0xffff,0x20,uVar1);
  return;
}

