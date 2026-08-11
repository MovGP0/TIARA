/* Ghidra address: 0183c340 */
/* Ghidra symbol: FUN_0183c340 */


void FUN_0183c340(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_0043e420(*(undefined8 *)(param_2 + 0x18),L"caseselector");
  if (iVar1 == 0) {
    iVar1 = FUN_0181e3e0(param_2);
    if (iVar1 == 2) {
      FUN_01836fd0(*(undefined8 *)(param_1 + 0x80),local_20,param_2);
      lVar2 = FUN_0184f010(&PTR_FUN_01841240,1,*(undefined8 *)(param_1 + 0x90),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x50),local_20[0]);
      FUN_01847420(*(undefined8 *)(param_1 + 0x58),lVar2);
      uVar3 = FUN_0181e3c0(param_2,0);
      uVar3 = FUN_01839a30(*(undefined8 *)(param_1 + 0x80),uVar3,*(undefined8 *)(param_1 + 0x90));
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      uVar3 = FUN_0181e3c0(param_2,1);
      FUN_0183d1c0(*(undefined8 *)(param_1 + 0x80),uVar3,*(undefined8 *)(param_1 + 0x90),lVar2);
    }
  }
  FUN_00414480(local_20);
  return;
}

