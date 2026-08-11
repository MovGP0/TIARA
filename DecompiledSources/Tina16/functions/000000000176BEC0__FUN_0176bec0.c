/* Ghidra address: 0176bec0 */
/* Ghidra symbol: FUN_0176bec0 */


/* WARNING: Removing unreachable block (ram,0x0176c08a) */

void FUN_0176bec0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  wchar_t *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  char local_1d;
  undefined4 local_1c [3];
  
  local_30[0] = 0;
  local_38 = 0;
  FUN_01769700(param_1,param_2);
  iVar3 = FUN_01d31a40(*param_2);
  if (iVar3 == 0) {
    local_1c[0] = (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8));
    FUN_01d311c0(*param_2,local_1c,4);
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x3dU) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      puVar2 = *(undefined8 **)(param_1 + 0xb8);
      uVar4 = (**(code **)*puVar2)(puVar2);
      FUN_01d326d0(*param_2,puVar2,uVar4);
      bVar1 = *(byte *)(*param_2 + 0x78);
      if (bVar1 < 8) {
        bVar5 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        local_1d = *(char *)(param_1 + 0xb0) + *(char *)(*param_2 + 0x7d) * '\x02';
      }
      else {
        local_1d = *(char *)(param_1 + 0xb0);
      }
      FUN_01d311c0(*param_2,&local_1d,1);
    }
    else if (*(char *)(param_1 + 0xb0) == '\0') {
      puVar2 = *(undefined8 **)(param_1 + 0xb8);
      uVar4 = (**(code **)*puVar2)(puVar2);
      FUN_01d326d0(*param_2,puVar2,uVar4);
    }
    else {
      FUN_01d30730(&local_38,0x1006);
      local_48 = L"Encrypted circuit macro";
      local_40 = 0x11;
      FUN_00442f70(local_30,local_38,&local_48,0);
      FUN_0072d730(local_30[0],0xffffffff,0xffffffff);
      FUN_01d31a50(*param_2,0x1006);
    }
  }
  FUN_00414560(&local_38,2);
  return;
}

