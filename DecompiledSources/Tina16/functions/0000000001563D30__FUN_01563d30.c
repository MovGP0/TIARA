/* Ghidra address: 01563d30 */
/* Ghidra symbol: FUN_01563d30 */


int FUN_01563d30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [268];
  int local_1c [3];
  
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_130 = 0;
  local_154 = 0;
  FUN_00414480(param_1 + 0x150);
  FUN_0040d200(param_1 + 0x29b,0x25,0);
  *(undefined2 *)(param_1 + 0x2ba) = 0xffff;
  *(undefined1 *)(param_1 + 0x29b) = 0;
  FUN_0040d200(param_1 + 0x276,0x25,0);
  *(undefined2 *)(param_1 + 0x295) = 0xffff;
  *(undefined1 *)(param_1 + 0x276) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x140) = 1;
  *(undefined8 *)(param_1 + 0x138) = 0x41cdcd6500000000;
  cVar2 = FUN_01d3f210(*(undefined8 *)(param_1 + 0x130));
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x14c) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x1a8) + 0x120);
    *(undefined4 *)(param_1 + 0x148) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x1a8) + 0x124);
    *(undefined4 *)(param_1 + 0x144) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x1a8) + 0x128);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x1a8);
    FUN_00416910(local_128,*(undefined8 *)(lVar1 + 0x148),0xff);
    FUN_00415020(param_1 + 0x29b,local_128,0x1e);
    *(undefined2 *)(param_1 + 0x2ba) = 0xffff;
    *(undefined2 *)(param_1 + 700) = 0;
    *(undefined2 *)(param_1 + 0x2be) = 0;
    FUN_00416910(local_128,*(undefined8 *)(lVar1 + 0x150),0xff);
    FUN_00415020(param_1 + 0x276,local_128,0x1e);
    *(undefined2 *)(param_1 + 0x295) = 0xffff;
    *(undefined2 *)(param_1 + 0x297) = 0;
    *(undefined2 *)(param_1 + 0x299) = 0;
  }
  if (*(int *)(param_1 + 300) == 0x462) {
    *(undefined4 *)(param_1 + 0x14c) = 3;
    *(undefined4 *)(param_1 + 0x140) = 4;
  }
  cVar2 = FUN_01d40240(*(undefined4 *)(param_1 + 300));
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  cVar2 = FUN_01d3fe60(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x40),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x2f0) + 0x838));
  if (cVar2 == '\0') {
    cVar2 = FUN_015f5c70(*(undefined8 *)(*(longlong *)(param_1 + 0x2f0) + 0xa18),
                         *(undefined8 *)(param_1 + 0x130),0x1ffff,local_1c,param_1 + 0x15c);
    if (cVar2 != '\0') {
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x1a8);
      if (local_1c[0] == 0x10000) {
        uVar5 = FUN_015fe680(*(undefined8 *)(param_1 + 0x110),2);
        local_1c[0] = FUN_015fd5a0(uVar5);
      }
      if (((((local_1c[0] == 1) || (local_1c[0] == 4)) || (local_1c[0] == 8)) ||
          ((local_1c[0] == 0x200 || (local_1c[0] == 0x400)))) || (local_1c[0] == 0x20)) {
        *(undefined4 *)(param_1 + 0x140) = 1;
        *(undefined8 *)(param_1 + 0x138) = 0x41cdcd6500000000;
      }
      else if (local_1c[0] == 2) {
        *(undefined4 *)(param_1 + 0x140) = 2;
        *(undefined8 *)(param_1 + 0x138) = 0x40c3880000000000;
      }
      FUN_015ef700(&local_148,*(undefined8 *)(param_1 + 0x130));
      FUN_017ff4a0(*(undefined8 *)(param_1 + 0x130),&local_150);
      FUN_00416cd0(&local_140,3,local_148,&LAB_015645e8,local_150);
      FUN_0043e1a0(&local_138,local_140);
      FUN_00414b50(param_1 + 0x150,local_138);
      local_154 = local_1c[0];
    }
    goto code_r0x01564599;
  }
  uVar3 = FUN_01d3d920(*(undefined8 *)(param_1 + 0x130),9,0,param_1 + 0x274);
  *(undefined1 *)(param_1 + 0x11f) = uVar3;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x2d0))
                    (*(longlong **)(param_1 + 0x130),*(undefined2 *)(param_1 + 0x274),
                     param_1 + 0x268);
  *(undefined1 *)(param_1 + 0x15f) = uVar3;
  *(undefined2 *)(param_1 + 0x2ba) = *(undefined2 *)(*(longlong *)(param_1 + 0x268) + 0x1f);
  FUN_00415020(param_1 + 0x29b,*(undefined8 *)(param_1 + 0x268),0x1e);
  *(short *)(param_1 + 0x11c) = *(short *)(param_1 + 0x274) + 1;
  uVar3 = FUN_01d3d920(*(undefined8 *)(param_1 + 0x130),9,*(undefined2 *)(param_1 + 0x11c),
                       param_1 + 0x274);
  *(undefined1 *)(param_1 + 0x11f) = uVar3;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x2d0))
                    (*(longlong **)(param_1 + 0x130),*(undefined2 *)(param_1 + 0x274),
                     param_1 + 0x268);
  *(undefined1 *)(param_1 + 0x15f) = uVar3;
  *(undefined2 *)(param_1 + 0x295) = *(undefined2 *)(*(longlong *)(param_1 + 0x268) + 0x1f);
  FUN_00415020(param_1 + 0x276,*(undefined8 *)(param_1 + 0x268),0x1e);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x2d0))
                    (*(longlong **)(param_1 + 0x130),0,param_1 + 0x260);
  *(undefined1 *)(param_1 + 0x15f) = uVar3;
  FUN_015638e0(&local_130,*(undefined8 *)(param_1 + 0x130));
  FUN_00416910(param_1 + 0x160,local_130,0xff);
  iVar4 = FUN_01d3d860(param_1 + 0x160);
  *(int *)(param_1 + 0x14c) = iVar4 + -1;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x140) = 1;
  cVar2 = FUN_01d3d530(*(undefined2 *)(param_1 + 300));
  if (cVar2 == '\0') {
LAB_015641a2:
    if ((*(int *)(param_1 + 300) == 0x889) || (*(int *)(param_1 + 300) == 0x45d)) goto LAB_015641c6;
  }
  else {
    cVar2 = FUN_01d400c0(*(undefined4 *)(param_1 + 300));
    if (cVar2 != '\0') goto LAB_015641a2;
LAB_015641c6:
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x2d0))
                      (*(longlong **)(param_1 + 0x130),2,param_1 + 0x268);
    *(undefined1 *)(param_1 + 0x15f) = uVar3;
    *(uint *)(param_1 + 0x148) = (uint)**(byte **)(param_1 + 0x268);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x2d0))
                      (*(longlong **)(param_1 + 0x130),3,param_1 + 0x268);
    *(undefined1 *)(param_1 + 0x15f) = uVar3;
    *(uint *)(param_1 + 0x144) = (uint)**(byte **)(param_1 + 0x268);
    if (*(int *)(param_1 + 300) == 0x889) {
      uVar6 = FUN_01cfde70(*(undefined8 *)(param_1 + 0x130),1,7,param_1 + 0x15f,param_1 + 0x15e,
                           param_1 + 0x15d);
      *(undefined8 *)(param_1 + 0x268) = uVar6;
      *(uint *)(param_1 + 0x140) = (uint)**(byte **)(param_1 + 0x268);
    }
    else {
      uVar6 = FUN_01cfde70(*(undefined8 *)(param_1 + 0x130),1,3,param_1 + 0x15f,param_1 + 0x15e,
                           param_1 + 0x15d);
      *(undefined8 *)(param_1 + 0x268) = uVar6;
      *(uint *)(param_1 + 0x140) = (uint)**(byte **)(param_1 + 0x268);
    }
  }
  cVar2 = FUN_01d3d590(*(undefined2 *)(param_1 + 300));
  if (cVar2 == '\0') {
LAB_01564354:
    if ((*(int *)(param_1 + 300) != 0x3ef) && (*(int *)(param_1 + 300) != 0x44f))
    goto code_r0x01564599;
  }
  else {
    cVar2 = FUN_01d40050(*(undefined4 *)(param_1 + 300));
    if (cVar2 != '\0') goto LAB_01564354;
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x2d0))
                    (*(longlong **)(param_1 + 0x130),1,param_1 + 0x268);
  *(undefined1 *)(param_1 + 0x15f) = uVar3;
  *(uint *)(param_1 + 0x148) = (uint)**(byte **)(param_1 + 0x268);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x2d0))
                    (*(longlong **)(param_1 + 0x130),2,param_1 + 0x268);
  *(undefined1 *)(param_1 + 0x15f) = uVar3;
  *(uint *)(param_1 + 0x144) = (uint)**(byte **)(param_1 + 0x268);
code_r0x01564599:
  FUN_00414560(&local_150,5);
  return local_154;
}

