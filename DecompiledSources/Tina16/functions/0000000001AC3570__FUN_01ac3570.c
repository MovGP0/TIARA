/* Ghidra address: 01ac3570 */
/* Ghidra symbol: FUN_01ac3570 */


void FUN_01ac3570(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
      uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,0);
      uVar1 = FUN_01cd60f0(uVar3,*(undefined8 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 100) = uVar1;
    }
  }
  else {
    plVar2 = (longlong *)FUN_01abda80(*(longlong *)(param_1 + 0x58));
    uVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
    (**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
    uVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)PTR_DAT_02005620 = uVar3;
    uVar3 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)PTR_DAT_020041f8 = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf0))
              (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x78),
               *(undefined8 *)(param_1 + 0x80),param_1 + 100,param_1 + 0x68);
  }
  FUN_01ac31e0(param_1);
  return;
}

