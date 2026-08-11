/* Ghidra address: 0139d420 */
/* Ghidra symbol: FUN_0139d420 */


void FUN_0139d420(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  int local_2c;
  
  plVar4 = (longlong *)0x0;
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar5 = *(int *)(lVar1 + 0x10);
  local_2c = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar1,local_2c);
      cVar2 = FUN_0139d3c0(auStack_68,uVar3);
      if (cVar2 != '\0') {
        plVar4 = (longlong *)FUN_00b94e60(lVar1,local_2c);
        break;
      }
      local_2c = local_2c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((plVar4 != (longlong *)0x0) &&
     ((*(char *)((longlong)plVar4 + 10) == '\0' || (*(char *)((longlong)plVar4 + 0xb) == '\0')))) {
    FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
    FUN_01994230(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    FUN_01993f30(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),plVar4,1,0);
    *(undefined1 *)((longlong)plVar4 + 0x3d3) = 0;
    uVar3 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    (**(code **)(*plVar4 + 200))(plVar4,uVar3,0xffffffff);
    uVar3 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    (**(code **)(*plVar4 + 0xa0))(plVar4,uVar3);
    local_48 = 0;
    local_40 = 1;
    (**(code **)(**(longlong **)PTR_DAT_02004e40 + 0x2f8))
              (*(longlong **)PTR_DAT_02004e40,*(undefined4 *)((longlong)plVar4 + 0xc),(int)plVar4[2]
               ,0);
  }
  return;
}

