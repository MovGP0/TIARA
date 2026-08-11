/* Ghidra address: 015e96c0 */
/* Ghidra symbol: FUN_015e96c0 */


undefined8 FUN_015e96c0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 local_3058 [40];
  int aiStack_3030 [1014];
  undefined1 local_2058;
  int local_202c;
  undefined8 local_2028;
  undefined8 uStack_2020;
  undefined1 local_1058;
  undefined1 local_58;
  
  local_58 = 0;
  local_1058 = 0;
  local_2058 = 0;
  local_3058[0] = 0;
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar2 + 8) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0xc) = 0;
  *(undefined4 *)(lVar2 + 0x14) = 0;
  uStack_2020._4_4_ = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x10) = 0;
  iVar6 = 0;
LAB_015e972c:
  uStack_2020._4_4_ = uStack_2020._4_4_ + 1;
  if (0x400 < uStack_2020._4_4_) {
    FUN_00e085e0(*(undefined8 *)(param_1 + 8),L"yyparse stack overflow");
    return 1;
  }
  aiStack_3030[uStack_2020._4_4_] = iVar6;
  (&uStack_2020)[uStack_2020._4_4_] = local_2028;
  do {
    if (((&DAT_01f73f98)[iVar6] == 0) && (*(int *)(*(longlong *)(param_1 + 8) + 8) == -1)) {
      iVar4 = FUN_015e8320(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
      lVar2 = *(longlong *)(param_1 + 8);
      *(int *)(lVar2 + 8) = iVar4;
      if (iVar4 < 0) {
        *(undefined4 *)(lVar2 + 8) = 0;
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x10) != '\0') {
      uVar5 = FUN_0040f200(PTR_DAT_02002680,L"state ");
      uVar5 = FUN_0040ef30(uVar5,iVar6);
      uVar5 = FUN_0040f200(uVar5,L", char ");
      uVar5 = FUN_0040ef30(uVar5,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8));
      FUN_0040f590(uVar5);
      FUN_00409900();
    }
    local_202c = (&DAT_01f73f98)[iVar6];
    if (local_202c == 0) {
      cVar3 = FUN_015e9600(local_3058,iVar6,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),
                           &local_202c);
      if (cVar3 != '\0') {
        if (local_202c < 1) {
          if (-1 < local_202c) {
            return 0;
          }
          goto LAB_015e9a65;
        }
        lVar2 = *(longlong *)(param_1 + 8);
        *(undefined4 *)(lVar2 + 8) = 0xffffffff;
        iVar6 = local_202c;
        if (0 < *(int *)(lVar2 + 0x14)) {
          *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + -1;
        }
        goto LAB_015e972c;
      }
      if (*(int *)(*(longlong *)(param_1 + 8) + 0x14) == 0) {
        FUN_00e085e0(*(longlong *)(param_1 + 8),L"syntax error");
      }
    }
    else {
LAB_015e9a65:
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x10) != '\0') {
        uVar5 = FUN_0040f200(PTR_DAT_02002680,L"reduce ");
        uVar5 = FUN_0040ef30(uVar5,-local_202c);
        FUN_0040f590(uVar5);
        FUN_00409900();
      }
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x11) = 0;
      FUN_015e8850(local_3058,-local_202c);
      uStack_2020._4_4_ = uStack_2020._4_4_ - *(int *)(&DAT_01f744cc + (longlong)-local_202c * 8);
      cVar3 = FUN_015e9660(local_3058,aiStack_3030[uStack_2020._4_4_],
                           *(undefined4 *)(&DAT_01f744d0 + (longlong)-local_202c * 8),&local_202c);
      if (cVar3 != '\0') {
        iVar6 = local_202c;
      }
      cVar3 = *(char *)(*(longlong *)(param_1 + 8) + 0x11);
      if (cVar3 == '\x01') {
        return 0;
      }
      if (cVar3 == '\x02') {
        return 1;
      }
      if (cVar3 != '\x03') goto LAB_015e972c;
    }
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x14) == 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0xc);
      *piVar1 = *piVar1 + 1;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar2 + 0x14) < 3) break;
    if (*(char *)(lVar2 + 0x10) != '\0') {
      uVar5 = FUN_0040f200(PTR_DAT_02002680,L"error recovery discards char ");
      uVar5 = FUN_0040ef30(uVar5,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8));
      FUN_0040f590(uVar5);
      FUN_00409900();
    }
    if (*(int *)(*(longlong *)(param_1 + 8) + 8) == 0) {
      return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 8) = 0xffffffff;
  } while( true );
  *(undefined4 *)(lVar2 + 0x14) = 3;
  while ((0 < uStack_2020._4_4_ &&
         ((cVar3 = FUN_015e9600(local_3058,aiStack_3030[uStack_2020._4_4_],0x100,&local_202c),
          cVar3 == '\0' || (local_202c < 1))))) {
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x10) != '\0') {
      if (uStack_2020._4_4_ < 2) {
        uVar5 = FUN_0040f200(PTR_DAT_02002680,L"error recovery fails ... abort");
        FUN_0040f590(uVar5);
        FUN_00409900();
      }
      else {
        uVar5 = FUN_0040f200(PTR_DAT_02002680,L"error recovery pops state ");
        uVar5 = FUN_0040ef30(uVar5,aiStack_3030[uStack_2020._4_4_]);
        uVar5 = FUN_0040f200(uVar5,L", uncovers ");
        uVar5 = FUN_0040ef30(uVar5,aiStack_3030[uStack_2020._4_4_ + -1]);
        FUN_0040f590(uVar5);
        FUN_00409900();
      }
    }
    uStack_2020._4_4_ = uStack_2020._4_4_ + -1;
  }
  iVar6 = local_202c;
  if (uStack_2020._4_4_ == 0) {
    return 1;
  }
  goto LAB_015e972c;
}

