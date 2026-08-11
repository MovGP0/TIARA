/* Ghidra address: 00603aa0 */
/* Ghidra symbol: FUN_00603aa0 */


void FUN_00603aa0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  cVar4 = FUN_004113d0(uVar1,param_2);
  if (cVar4 == '\0') {
    FUN_00410f20(uVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar2 = (**(code **)(param_2 + 0xa0))(param_2,1);
    *(longlong *)(param_1 + 0x18) = lVar2;
    *(longlong *)(lVar2 + 0x20) = param_1;
    uVar1 = FUN_00411550(param_1,0xfffd);
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
    *(longlong *)(lVar2 + 0x30) = param_1;
    uVar1 = FUN_00411550(param_1,0xfffc);
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
    pcVar3 = (code *)FUN_00411550(param_1,0xfffd);
    (*pcVar3)(param_1,param_1);
  }
  return;
}

