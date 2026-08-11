/* Ghidra address: 00bd41f0 */
/* Ghidra symbol: FUN_00bd41f0 */


void FUN_00bd41f0(longlong *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00bd42b0(param_1);
  puVar2 = (undefined1 *)(**(code **)(*param_1 + 0x30))(param_1,param_2);
  if ((undefined1 *)param_1[7] != puVar2) {
    param_1[7] = (longlong)puVar2;
    if (*(longlong *)(puVar2 + 8) == 0) {
      lVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
      param_1[5] = lVar3;
      uVar4 = (**(code **)*param_1)(param_1);
      uVar5 = thunk_FUN_041a19a1(uVar4,param_1[5]);
      lVar3 = param_1[7];
      *(longlong *)(lVar3 + 8) = param_1[5];
      uVar1 = (**(code **)(*param_1 + 0x18))(param_1,uVar4,lVar3 + 0x14);
      *(undefined4 *)(lVar3 + 0x10) = uVar1;
      thunk_FUN_041a19a1(uVar4,uVar5);
      (**(code **)(*param_1 + 8))(param_1,uVar4);
    }
    else {
      param_1[5] = *(longlong *)(puVar2 + 8);
      *(undefined1 *)(param_1 + 6) = *puVar2;
    }
  }
  return;
}

