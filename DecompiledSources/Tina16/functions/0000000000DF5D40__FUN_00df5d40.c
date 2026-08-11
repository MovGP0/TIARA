/* Ghidra address: 00df5d40 */
/* Ghidra symbol: FUN_00df5d40 */


void FUN_00df5d40(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar3 = FUN_01b05600(param_1,**(undefined1 **)(lVar1 + 8));
  uVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 1));
  uVar5 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 2));
  uVar6 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 3));
  uVar7 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  uVar8 = FUN_01b05690(param_1,param_4 & 0xffffffff,2);
  puVar2 = *(undefined4 **)(lVar1 + 0x10);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar2 = *(undefined4 **)(lVar1 + 0x30);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  *(undefined4 *)(lVar1 + 0x68) = 0;
  FUN_017ddc70(*(undefined8 *)(param_2 + 0xd8),uVar3,uVar4,uVar7,lVar1 + 0x58,lVar1 + 0x60,
               lVar1 + 0x68);
  FUN_017ddc70(*(undefined8 *)(param_2 + 0xd8),uVar5,uVar6,uVar8,lVar1 + 0x58,lVar1 + 0x60,
               lVar1 + 0x68);
  FUN_017ddb80(*(undefined8 *)(param_2 + 0xd8),uVar8,uVar7,lVar1 + 0x58,lVar1 + 0x60,lVar1 + 0x68);
  FUN_017ddb80(*(undefined8 *)(param_2 + 0xd8),uVar8,*(undefined4 *)(param_2 + 0x308),lVar1 + 0x58,
               lVar1 + 0x60,lVar1 + 0x68);
  return;
}

