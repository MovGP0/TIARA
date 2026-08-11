/* Ghidra address: 00de11b0 */
/* Ghidra symbol: FUN_00de11b0 */


void FUN_00de11b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  
  lVar1 = FUN_007f9b70(param_1,1);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x550) != param_1)) {
    uVar2 = FUN_0065b4a0(param_1);
    FUN_0064d000(param_1,local_28);
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1 + 0x570;
    }
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x58))
              (*(longlong **)(param_1 + 0x4b0),0xfffffffc,0,lVar1,0,uVar2,local_28);
  }
  return;
}

