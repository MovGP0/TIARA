/* Ghidra address: 006dc460 */
/* Ghidra symbol: FUN_006dc460 */


undefined4 FUN_006dc460(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  
  lVar1 = FUN_006dc7c0(param_1);
  if (*(longlong *)(lVar1 + 0x608) == 0) {
    uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_00416740(*(undefined8 *)(param_2 + 0x10));
    local_2c = thunk_FUN_0418240f(uVar2,uVar3);
  }
  else {
    uVar2 = FUN_006dc7c0(param_1);
    lVar1 = FUN_006dc7c0(param_1);
    (**(code **)(lVar1 + 0x608))
              (*(undefined8 *)(lVar1 + 0x610),uVar2,param_1,param_2,param_3,&local_2c);
  }
  return local_2c;
}

