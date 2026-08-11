/* Ghidra address: 015f7850 */
/* Ghidra symbol: FUN_015f7850 */


/* WARNING: Removing unreachable block (ram,0x015f7961) */

void FUN_015f7850(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_01d03160(param_2);
  uVar2 = FUN_015f7420(param_2);
  puVar6 = &local_2b;
  psVar4 = (short *)FUN_01cfde70(param_2,1,2,&local_2a,puVar6,&local_29);
  bVar5 = *psVar4 == 1;
  iVar3 = 0;
  cVar1 = FUN_01576400(param_1,param_3 + 8);
  uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
  if ((bool)cVar1 == bVar5) {
    local_4c = 0;
    do {
      cVar1 = FUN_01576400(param_1,local_4c);
      uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
      if ((cVar1 != '\0') && (cVar1 != '\x01')) {
        cVar1 = bVar5;
      }
      if ((bool)cVar1 == bVar5) {
        iVar3 = iVar3 + 1;
      }
      if (local_4c < 7) {
        iVar3 = iVar3 * 2;
      }
      local_4c = local_4c + 1;
    } while (local_4c != 8);
  }
  else {
    cVar1 = FUN_015f74b0(param_2);
    if (cVar1 == '\0') {
      iVar3 = 0xff;
    }
    else {
      iVar3 = FUN_015f7660(param_2,param_3,uVar2,3);
    }
  }
  FUN_015f7500(param_2,param_3,iVar3,uVar2,CONCAT44(uVar7,3));
  FUN_00414560(&local_48,3);
  return;
}

