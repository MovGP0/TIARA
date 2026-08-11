/* Ghidra address: 0184a6e0 */
/* Ghidra symbol: FUN_0184a6e0 */


void FUN_0184a6e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 longlong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  lVar3 = *param_5;
  lVar4 = param_5[1];
  uVar5 = FUN_018228f0(param_3,*(undefined8 *)(param_1 + 0xa8));
  lVar6 = FUN_01847460(&PTR_FUN_01844b08,1,param_2,uVar5,param_3);
  *(undefined8 *)(lVar6 + 0xb0) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(lVar6 + 0xe0) = uVar1;
  *(undefined8 *)(lVar6 + 0xe8) = uVar2;
  *(longlong *)(lVar6 + 0xf0) = lVar3;
  *(longlong *)(lVar6 + 0xf8) = lVar4;
  *(bool *)(lVar6 + 0x19) = lVar3 == 0;
  FUN_01847420(*(undefined8 *)(param_1 + 0xa0),lVar6);
  return;
}

