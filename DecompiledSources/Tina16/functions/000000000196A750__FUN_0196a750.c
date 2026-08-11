/* Ghidra address: 0196a750 */
/* Ghidra symbol: FUN_0196a750 */


void FUN_0196a750(longlong *param_1,undefined8 param_2,undefined2 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar3 = (undefined1)((ushort)param_3 >> 8);
  lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
    FUN_01977cb0(uVar2,0,CONCAT11(uVar3,1),1);
  }
  return;
}

