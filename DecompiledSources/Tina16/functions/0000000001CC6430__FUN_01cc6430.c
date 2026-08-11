/* Ghidra address: 01cc6430 */
/* Ghidra symbol: FUN_01cc6430 */


void FUN_01cc6430(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 8);
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  *param_3 = (int)plVar1[0x8a];
  *(undefined4 *)(plVar1 + 0x8a) = uVar2;
  uVar4 = FUN_004b6da0(plVar1[0x87]);
  *param_4 = uVar4;
  FUN_0040d200(param_2 + 0x48,0x88,0);
  iVar3 = 0;
  do {
    *(undefined1 *)(param_2 + 0x58 + (longlong)iVar3 * 0x11) = 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  FUN_0040d200(param_2 + 0xd0,0x80,0);
  *(undefined4 *)(param_2 + 0x2c) = 0;
  FUN_004b6dc0(plVar1[0x87],*(undefined8 *)(param_2 + 0x160));
  return;
}

