/* Ghidra address: 00a5cbd0 */
/* Ghidra symbol: FUN_00a5cbd0 */


void FUN_00a5cbd0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 local_2c;
  
  local_2c = 0xffffffff;
  cVar1 = (**(code **)(*param_1 + 0x140))(param_1,L"table",&local_2c);
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_2c);
    FUN_00461840(lVar2 + 0x90,param_2 + 0x90);
    FUN_00461840(lVar2 + 0xa8,param_2 + 0xa8);
    FUN_00461840(lVar2 + 0xc0,param_2 + 0xc0);
    FUN_00461840(lVar2 + 0x630,param_2 + 0x630);
    FUN_00461840(lVar2 + 0x120,param_2 + 0x120);
    uVar3 = 0x1e;
    do {
      FUN_00461840(lVar2 + 0x78 + uVar3 * 0x18,param_2 + 0x78 + uVar3 * 0x18);
      bVar4 = (char)uVar3 + 1;
      uVar3 = (ulonglong)bVar4;
    } while (bVar4 != 0x22);
  }
  cVar1 = (**(code **)(*param_1 + 0x140))(param_1,&PTR_DAT_00a5cda4,&local_2c);
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_2c);
    FUN_00461840(lVar2 + 0x120,param_2 + 0x120);
    uVar3 = 0x1e;
    do {
      FUN_00461840(lVar2 + 0x78 + uVar3 * 0x18,param_2 + 0x78 + uVar3 * 0x18);
      bVar4 = (char)uVar3 + 1;
      uVar3 = (ulonglong)bVar4;
    } while (bVar4 != 0x22);
  }
  cVar1 = (**(code **)(*param_1 + 0x140))(param_1,&DAT_00a5cdb8,&local_2c);
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_2c);
    FUN_00461840(lVar2 + 0x120,param_2 + 0x120);
    uVar3 = 0x1e;
    do {
      FUN_00461840(lVar2 + 0x78 + uVar3 * 0x18,param_2 + 0x78 + uVar3 * 0x18);
      bVar4 = (char)uVar3 + 1;
      uVar3 = (ulonglong)bVar4;
    } while (bVar4 != 0x22);
  }
  return;
}

