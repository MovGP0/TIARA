/* Ghidra address: 01bb3f00 */
/* Ghidra symbol: FUN_01bb3f00 */


void FUN_01bb3f00(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_169;
  int local_168;
  int local_164;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined1 local_138;
  undefined1 local_137 [263];
  
  cVar1 = FUN_00440a20(param_2,1);
  if (cVar1 != '\0') {
    uVar2 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x20);
    FUN_004b84c0(uVar2,&local_169,1);
    FUN_004153c0(&local_138,local_169);
    FUN_004b84c0(uVar2,local_137,local_169);
    uVar3 = FUN_01bb05c0(&DAT_01baf5c8,1,uVar2);
    FUN_01bb07a0(uVar3,1,&local_160);
    FUN_01bb0950(local_160,0x88ba,&local_164);
    FUN_01baff50(local_160,1);
    FUN_01bb07a0(uVar3,0x138a,&local_160);
    iVar5 = local_164;
    if (-1 < local_164 + -1) {
      do {
        uVar4 = FUN_01bb0830(&DAT_01baf5c8,1,local_160);
        FUN_01bb0950(uVar4,0x88c3,&local_168);
        if (local_168 == 2) {
          FUN_01bb09b0(uVar4,0x4e28,&local_140);
          FUN_01bb09b0(uVar4,0x4e29,&local_148);
          FUN_01bb09b0(uVar4,0x4e2a,&local_150);
          FUN_01bb09b0(uVar4,0x4e2b,&local_158);
          *param_3 = local_150 - local_140;
          *param_4 = local_158 - local_148;
        }
        FUN_01baff50(uVar4,1);
      } while ((local_168 != 2) && (iVar5 = iVar5 + -1, iVar5 != 0));
    }
    FUN_01baff50(local_160,1);
    FUN_01baff50(uVar3,1);
    FUN_00410f20(uVar2);
  }
  return;
}

