/* Ghidra address: 006e3ca0 */
/* Ghidra symbol: FUN_006e3ca0 */


void FUN_006e3ca0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uStack_2c;
  
  FUN_0065a5b0(param_1,param_2);
  lVar2 = *(longlong *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 8);
  if (cVar1 == '\x01') {
    (**(code **)(**(longlong **)(lVar2 + 8) + 0x30))(*(longlong **)(lVar2 + 8));
    uVar4 = FUN_006e25f0(param_1);
    *(undefined8 *)(param_1 + 0x4f8) = uVar4;
    FUN_006e2640(param_1,0);
    (**(code **)(**(longlong **)(lVar2 + 8) + 0x40))(*(longlong **)(lVar2 + 8));
  }
  else if (cVar1 == '\x02') {
    uVar3 = FUN_0064d3a0(param_1,lVar2);
    uStack_2c = (undefined4)(uVar3 >> 0x20);
    FUN_006e3d60(param_1,*(undefined8 *)(lVar2 + 8),uVar3 & 0xffffffff,uStack_2c,
                 *(longlong *)(param_2 + 0x18) != 0);
  }
  else if (cVar1 == '\x03') {
    *(undefined8 *)(param_1 + 0x4f8) = 0;
  }
  return;
}

